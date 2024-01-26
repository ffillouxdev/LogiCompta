import Head from './components/Head';
import Navbar from './components/Navbar';
import Main from './components/Main';
import Footer from './components/Footer';

import './styles/Global.scss';

function App() {
  return (
    <>
      <Head />
        <Navbar />
        <Main />
        <Footer />
    </> 
  );
}

export default App;
