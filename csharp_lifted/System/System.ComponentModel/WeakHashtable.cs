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

[Token(Token = "0x20001EC")]
internal sealed class WeakHashtable : Hashtable
{
	[Token(Token = "0x20001ED")]
	private class WeakKeyComparer : IEqualityComparer
	{
		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x627C690", Offset = "0x627B690", VA = "0x627C690", Slot = "4")]
		private bool System_002ECollections_002EIEqualityComparer_002EEquals(object x, object y)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D8A")]
		[Address(RVA = "0x627C7F0", Offset = "0x627B7F0", VA = "0x627C7F0", Slot = "5")]
		private int System_002ECollections_002EIEqualityComparer_002EGetHashCode(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D8B")]
		[Address(RVA = "0x627C680", Offset = "0x627B680", VA = "0x627C680")]
		public WeakKeyComparer()
		{
		}
	}

	[Token(Token = "0x20001EE")]
	private sealed class EqualityWeakReference : WeakReference
	{
		[Token(Token = "0x400073C")]
		[FieldOffset(Offset = "0x20")]
		private int _hashCode;

		[Token(Token = "0x6000D8C")]
		[Address(RVA = "0x627C5D0", Offset = "0x627B5D0", VA = "0x627C5D0")]
		internal EqualityWeakReference(object o)
		{
		}

		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x627C820", Offset = "0x627B820", VA = "0x627C820", Slot = "0")]
		public override bool Equals(object o)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x627C890", Offset = "0x627B890", VA = "0x627C890", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000739")]
	[FieldOffset(Offset = "0x0")]
	private static IEqualityComparer _comparer;

	[Token(Token = "0x400073A")]
	[FieldOffset(Offset = "0x50")]
	private long _lastGlobalMem;

	[Token(Token = "0x400073B")]
	[FieldOffset(Offset = "0x58")]
	private int _lastHashCount;

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x6269F30", Offset = "0x6268F30", VA = "0x6269F30")]
	internal WeakHashtable()
	{
	}

	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x627BE70", Offset = "0x627AE70", VA = "0x627BE70", Slot = "24")]
	public override void Clear()
	{
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x627BE80", Offset = "0x627AE80", VA = "0x627BE80", Slot = "39")]
	public override void Remove(object key)
	{
	}

	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x6268480", Offset = "0x6267480", VA = "0x6268480")]
	public void SetWeak(object key, object value)
	{
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x627BE90", Offset = "0x627AE90", VA = "0x627BE90")]
	private void ScavengeKeys()
	{
	}
}
