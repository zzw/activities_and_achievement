<?php
/**
 * @file
 * activities_and_achievement.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function activities_and_achievement_taxonomy_default_vocabularies() {
  return array(
    'activitytype' => array(
      'name' => 'ActivityType',
      'machine_name' => 'activitytype',
      'description' => '活动类型',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
