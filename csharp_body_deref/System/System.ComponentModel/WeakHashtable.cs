// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.WeakHashtable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48DF6D0", Offset = "0x48DF6D0", VA = "0x48DF6D0", Slot = "4")]
		private bool System_002ECollections_002EIEqualityComparer_002EEquals(object x, object y)
		{
			return default(bool);
		}

		[Token(Token = "0x6001502")]
		[Address(RVA = "0x48DF830", Offset = "0x48DF830", VA = "0x48DF830", Slot = "5")]
		private int System_002ECollections_002EIEqualityComparer_002EGetHashCode(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x6001503")]
		[Address(RVA = "0x48DF6C0", Offset = "0x48DF6C0", VA = "0x48DF6C0")]
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
		[Address(RVA = "0x48DF610", Offset = "0x48DF610", VA = "0x48DF610")]
		internal EqualityWeakReference(object o)
		{
		}

		[Token(Token = "0x6001505")]
		[Address(RVA = "0x48DF860", Offset = "0x48DF860", VA = "0x48DF860", Slot = "0")]
		public override bool Equals(object o)
		{
			return default(bool);
		}

		[Token(Token = "0x6001506")]
		[Address(RVA = "0x48DF8D0", Offset = "0x48DF8D0", VA = "0x48DF8D0", Slot = "2")]
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
	[Address(RVA = "0x48CC470", Offset = "0x48CC470", VA = "0x48CC470")]
	internal WeakHashtable()
	{
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x48DEDD0", Offset = "0x48DEDD0", VA = "0x48DEDD0", Slot = "24")]
	public override void Clear()
	{
	}

	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x48DEDE0", Offset = "0x48DEDE0", VA = "0x48DEDE0", Slot = "39")]
	public override void Remove(object key)
	{
	}

	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x48CA850", Offset = "0x48CA850", VA = "0x48CA850")]
	public void SetWeak(object key, object value)
	{
	}

	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x48DEDF0", Offset = "0x48DEDF0", VA = "0x48DEDF0")]
	private void ScavengeKeys()
	{
	}
}
