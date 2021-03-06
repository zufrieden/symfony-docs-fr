empty_data
~~~~~~~~~~

**type**: ``divers`` **default**: ``array()`` si ``multiple`` ou ``expanded``, ``''`` sinon

Cette option d�termine quelle valeur le champ affichera si le choix ``empty_value``
est s�lectionn�.

Par exemple, si vous voulez que le champ ``gender`` soit d�fini comme ``null`` si
aucune valeur n'est s�lectionn�e, vous pouvez le faire comme ceci :

.. code-block:: php

    $builder->add('gender', 'choice', array(
        'choices' => array(
            'm' => 'Masculin',
            'f' => 'F�minin'
        ),
        'required'    => false,
        'empty_value' => 'Choisissez votre sexe',
        'empty_data'  => null
    ));
