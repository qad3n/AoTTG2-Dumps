// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.DllImportAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x200044B")]
[AttributeUsage(AttributeTargets.Method, Inherited = false)]
[ComVisible(true)]
public sealed class DllImportAttribute : Attribute
{
	[Token(Token = "0x40012B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string _val;

	[Token(Token = "0x40012B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string EntryPoint;

	[Token(Token = "0x40012BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public CharSet CharSet;

	[Token(Token = "0x40012BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public bool SetLastError;

	[Token(Token = "0x40012BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25")]
	public bool ExactSpelling;

	[Token(Token = "0x40012BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26")]
	public bool PreserveSig;

	[Token(Token = "0x40012BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public CallingConvention CallingConvention;

	[Token(Token = "0x40012BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public bool BestFitMapping;

	[Token(Token = "0x40012C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2D")]
	public bool ThrowOnUnmappableChar;

	[Token(Token = "0x1700045F")]
	public string Value
	{
		[Token(Token = "0x60021DA")]
		[Address(RVA = "0x3BBD890", Offset = "0x3BBD890", VA = "0x3BBD890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60021D6")]
	[Address(RVA = "0x3BBD5A0", Offset = "0x3BBD5A0", VA = "0x3BBD5A0")]
	internal static Attribute GetCustomAttribute(System.Reflection.RuntimeMethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60021D7")]
	[Address(RVA = "0x3BBD830", Offset = "0x3BBD830", VA = "0x3BBD830")]
	internal static bool IsDefined(System.Reflection.RuntimeMethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x60021D8")]
	[Address(RVA = "0x3BBD7B0", Offset = "0x3BBD7B0", VA = "0x3BBD7B0")]
	internal DllImportAttribute(string dllName, string entryPoint, CharSet charSet, bool exactSpelling, bool setLastError, bool preserveSig, CallingConvention callingConvention, bool bestFitMapping, bool throwOnUnmappableChar)
	{
	}

	[Token(Token = "0x60021D9")]
	[Address(RVA = "0x3BBD860", Offset = "0x3BBD860", VA = "0x3BBD860")]
	public DllImportAttribute(string dllName)
	{
	}
}
