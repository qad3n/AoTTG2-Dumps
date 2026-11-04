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

[Token(Token = "0x200022B")]
internal sealed class WeakHashtable : Hashtable
{
	[Token(Token = "0x200022C")]
	private class WeakKeyComparer : IEqualityComparer
	{
		[Token(Token = "0x6000F49")]
		[Address(RVA = "0x28E97D0", Offset = "0x28E7DD0", VA = "0x1828E97D0", Slot = "4")]
		private bool System_002ECollections_002EIEqualityComparer_002EEquals(object x, object y)
		{
			return default(bool);
		}

		[Token(Token = "0x6000F4A")]
		[Address(RVA = "0x28E9960", Offset = "0x28E7F60", VA = "0x1828E9960", Slot = "5")]
		private int System_002ECollections_002EIEqualityComparer_002EGetHashCode(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000F4B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public WeakKeyComparer()
		{
		}
	}

	[Token(Token = "0x200022D")]
	private sealed class EqualityWeakReference : WeakReference
	{
		[Token(Token = "0x400080B")]
		[FieldOffset(Offset = "0x20")]
		private int _hashCode;

		[Token(Token = "0x6000F4C")]
		[Address(RVA = "0x28D39A0", Offset = "0x28D1FA0", VA = "0x1828D39A0")]
		internal EqualityWeakReference(object o)
		{
		}

		[Token(Token = "0x6000F4D")]
		[Address(RVA = "0x28D3920", Offset = "0x28D1F20", VA = "0x1828D3920", Slot = "0")]
		public override bool Equals(object o)
		{
			return default(bool);
		}

		[Token(Token = "0x6000F4E")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000808")]
	[FieldOffset(Offset = "0x0")]
	private static IEqualityComparer _comparer;

	[Token(Token = "0x4000809")]
	[FieldOffset(Offset = "0x50")]
	private long _lastGlobalMem;

	[Token(Token = "0x400080A")]
	[FieldOffset(Offset = "0x58")]
	private int _lastHashCount;

	[Token(Token = "0x6000F43")]
	[Address(RVA = "0x28E9770", Offset = "0x28E7D70", VA = "0x1828E9770")]
	internal WeakHashtable()
	{
	}

	[Token(Token = "0x6000F44")]
	[Address(RVA = "0x28E9210", Offset = "0x28E7810", VA = "0x1828E9210", Slot = "24")]
	public override void Clear()
	{
	}

	[Token(Token = "0x6000F45")]
	[Address(RVA = "0x28E9220", Offset = "0x28E7820", VA = "0x1828E9220", Slot = "39")]
	public override void Remove(object key)
	{
	}

	[Token(Token = "0x6000F46")]
	[Address(RVA = "0x28E9650", Offset = "0x28E7C50", VA = "0x1828E9650")]
	public void SetWeak(object key, object value)
	{
	}

	[Token(Token = "0x6000F47")]
	[Address(RVA = "0x28E9230", Offset = "0x28E7830", VA = "0x1828E9230")]
	private void ScavengeKeys()
	{
	}
}
