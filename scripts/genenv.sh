#!/bin/bash

set -e

echo "TRAVIS_REPO_SLUG=$TRAVIS_REPO_SLUG" > .env
# shellcheck disable=SC2129
echo "TRAVIS_PULL_REQUEST=$TRAVIS_PULL_REQUEST" >> .env
echo "TRAVIS_BRANCH=$TRAVIS_BRANCH" >> .env
echo "TRAVIS_COMMIT=$TRAVIS_COMMIT" >> .env