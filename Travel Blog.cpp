import React from 'react';
import { makeStyles } from '@material-ui/core/styles';
import { Container, Typography, Grid, Card, CardContent } from '@material-ui/core';

const useStyles = makeStyles((theme) => ({
  root: {
    flexGrow: 1,
    marginTop: theme.spacing(4),
  },
  section: {
    marginBottom: theme.spacing(4),
  },
  card: {
    height: '100%',
    display: 'flex',
    flexDirection: 'column',
  },
}));

const sections = [
  {
    title: 'Sigiriya',
    content: 'Sigiriya or Sinhagiri is an ancient rock fortress located in the 
    northern Matale District near the town of Dambulla in the Central Province, 
    Sri Lanka. It is a site of historical and archaeological significance that 
    is dominated by a massive column of granite approximately 180 m high.',
  },
  {
    title: 'Colombo',
    content: 'Colombo is the capital of Sri Lanka, and the largest city in the 
    country by population. It is located on the west coast of the island, south
     of the Kelani River, and is a major port on the Indian Ocean. Colombo is 
     the financial center of the island and a popular tourist destination, with 
     beaches and green mountains.',
  },
  {
    title: 'Yala National Part',
    content: 'Yala National Park is a wildlife sanctuary and national park in 
    southeast Sri Lanka that's known for its variety of wildlife. It's home to 
    44 mammal species, 215 bird species, and the highest population of leopards
     in the world. The park also has crocodiles, turtles, buffaloes, monkeys, 
     peacocks, sloth bears, and fishing cats.',
  },
  {
    title: 'Kandy',
    content: 'Kandy is a city in central Sri Lanka, located on a plateau 
    surrounded by mountains. It's known for its sacred Buddhist sites, including
     the Temple of the Tooth (Sri Dalada Maligawa) shrine, and the scenic Kandy
      Lake (Bogambara Lake), which is popular for strolling. Kandy is also 
      central to Sri Lanka's history and is home to many of the island's 
      cultural gems.',
  },
  {
    title: 'Trincomalee',
    content: 'Trincomalee, also known as Gokanna, is a port city in the Eastern
     Province of Sri Lanka. It's located on a peninsula in Trincomalee Bay, 237
      kilometers northeast of Colombo, and is the administrative headquarters
       of the Trincomalee District.',
  },
];

const TravelBlog = () => {
  const classes = useStyles();

  return (
    <Container className={classes.root}>
      <Typography variant="h3" align="center" gutterBottom>
        Welcome to Our Travel Blog
      </Typography>
      <Grid container spacing={3}>
        {sections.map((section, index) => (
          <Grid item xs={12} sm={6} md={4} key={index}>
            <Card className={classes.card}>
              <CardContent>
                <Typography gutterBottom variant="h5" component="h2">
                  {section.title}
                </Typography>
                <Typography variant="body2" color="textSecondary" component="p">
                  {section.content}
                </Typography>
              </CardContent>
            </Card>
          </Grid>
        ))}
      </Grid>
    </Container>
  );
};

export default TravelBlog;
