// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.CompatibleComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Serializable]
[Token(Token = "0x2000213")]
internal class CompatibleComparer : IEqualityComparer
{
	[Token(Token = "0x400077D")]
	[FieldOffset(Offset = "0x10")]
	private IComparer _comparer;

	[Token(Token = "0x400077E")]
	[FieldOffset(Offset = "0x0")]
	private static IComparer defaultComparer;

	[Token(Token = "0x400077F")]
	[FieldOffset(Offset = "0x18")]
	private IHashCodeProvider _hcp;

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x8")]
	private static IHashCodeProvider defaultHashProvider;

	[Token(Token = "0x17000309")]
	public IComparer Comparer
	{
		[Token(Token = "0x6000E6C")]
		[Address(RVA = "0x6285D60", Offset = "0x6284D60", VA = "0x6285D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030A")]
	public IHashCodeProvider HashCodeProvider
	{
		[Token(Token = "0x6000E6D")]
		[Address(RVA = "0x6285D70", Offset = "0x6284D70", VA = "0x6285D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030B")]
	public static IComparer DefaultComparer
	{
		[Token(Token = "0x6000E6E")]
		[Address(RVA = "0x6285D80", Offset = "0x6284D80", VA = "0x6285D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030C")]
	public static IHashCodeProvider DefaultHashCodeProvider
	{
		[Token(Token = "0x6000E6F")]
		[Address(RVA = "0x6285E60", Offset = "0x6284E60", VA = "0x6285E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x6285A10", Offset = "0x6284A10", VA = "0x6285A10")]
	internal CompatibleComparer(IComparer comparer, IHashCodeProvider hashCodeProvider)
	{
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x6285A50", Offset = "0x6284A50", VA = "0x6285A50", Slot = "4")]
	public new bool Equals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E6B")]
	[Address(RVA = "0x6285C50", Offset = "0x6284C50", VA = "0x6285C50", Slot = "5")]
	public int GetHashCode(object obj)
	{
		return default(int);
	}
}
