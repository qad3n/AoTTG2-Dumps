using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000320")]
internal sealed class WeakHashtable : Hashtable
{
	[Token(Token = "0x2000321")]
	private class WeakKeyComparer : IEqualityComparer
	{
		[Token(Token = "0x6001501")]
		[Address(RVA = "0x45BA5D0", Offset = "0x45BA5D0", VA = "0x45BA5D0", Slot = "4")]
		private bool System_002ECollections_002EIEqualityComparer_002EEquals(object x, object y)
		{
			return default(bool);
		}

		[Token(Token = "0x6001502")]
		[Address(RVA = "0x45BA730", Offset = "0x45BA730", VA = "0x45BA730", Slot = "5")]
		private int System_002ECollections_002EIEqualityComparer_002EGetHashCode(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x6001503")]
		[Address(RVA = "0x45BA5C0", Offset = "0x45BA5C0", VA = "0x45BA5C0")]
		public WeakKeyComparer()
		{
		}
	}

	[Token(Token = "0x2000322")]
	private sealed class EqualityWeakReference : WeakReference
	{
		[Token(Token = "0x4000ED4")]
		[FieldOffset(Offset = "0x20")]
		private int _hashCode;

		[Token(Token = "0x6001504")]
		[Address(RVA = "0x45BA510", Offset = "0x45BA510", VA = "0x45BA510")]
		internal EqualityWeakReference(object o)
		{
		}

		[Token(Token = "0x6001505")]
		[Address(RVA = "0x45BA760", Offset = "0x45BA760", VA = "0x45BA760", Slot = "0")]
		public override bool Equals(object o)
		{
			return default(bool);
		}

		[Token(Token = "0x6001506")]
		[Address(RVA = "0x45BA7D0", Offset = "0x45BA7D0", VA = "0x45BA7D0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000ED1")]
	[FieldOffset(Offset = "0x0")]
	private static IEqualityComparer _comparer;

	[Token(Token = "0x4000ED2")]
	[FieldOffset(Offset = "0x50")]
	private long _lastGlobalMem;

	[Token(Token = "0x4000ED3")]
	[FieldOffset(Offset = "0x58")]
	private int _lastHashCount;

	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x45A7370", Offset = "0x45A7370", VA = "0x45A7370")]
	internal WeakHashtable()
	{
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x45B9CD0", Offset = "0x45B9CD0", VA = "0x45B9CD0", Slot = "24")]
	public override void Clear()
	{
	}

	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x45B9CE0", Offset = "0x45B9CE0", VA = "0x45B9CE0", Slot = "39")]
	public override void Remove(object key)
	{
	}

	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x45A5750", Offset = "0x45A5750", VA = "0x45A5750")]
	public void SetWeak(object key, object value)
	{
	}

	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x45B9CF0", Offset = "0x45B9CF0", VA = "0x45B9CF0")]
	private void ScavengeKeys()
	{
	}
}
