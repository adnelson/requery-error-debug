module Pg = Requery.Postgres.Client;

let makePgConfig = () =>
  Pg.Config.make(
  (),
  );

let pool = Pg.Pool.makePool(Pg.Config.make(~host="localhost", ~port=5432, ~database="postgres", ()));

pool->Pg.Pool.releasePool;
