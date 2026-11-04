namespace Map
{
    internal class ContentTransferChangeTracker
    {
        private string _identity;
        private string _hash;

        public bool Update(string identity, string hash)
        {
            bool changed = _identity != identity || _hash != hash;
            _identity = identity;
            _hash = hash;
            return changed;
        }
    }
}
