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

[Token(Token = "0x200047A")]
[AttributeUsage(AttributeTargets.Method, Inherited = false)]
[ComVisible(true)]
public sealed class DllImportAttribute : Attribute
{
	[Token(Token = "0x40012BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string _val;

	[Token(Token = "0x40012BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string EntryPoint;

	[Token(Token = "0x40012BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public CharSet CharSet;

	[Token(Token = "0x40012BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public bool SetLastError;

	[Token(Token = "0x40012BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25")]
	public bool ExactSpelling;

	[Token(Token = "0x40012BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26")]
	public bool PreserveSig;

	[Token(Token = "0x40012C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public CallingConvention CallingConvention;

	[Token(Token = "0x40012C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public bool BestFitMapping;

	[Token(Token = "0x40012C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2D")]
	public bool ThrowOnUnmappableChar;

	[Token(Token = "0x17000462")]
	public string Value
	{
		[Token(Token = "0x600224B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002247")]
	[Address(RVA = "0x1A29BB0", Offset = "0x1A281B0", VA = "0x181A29BB0")]
	internal static Attribute GetCustomAttribute(System.Reflection.RuntimeMethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6002248")]
	[Address(RVA = "0x1A29E30", Offset = "0x1A28430", VA = "0x181A29E30")]
	internal static bool IsDefined(System.Reflection.RuntimeMethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x6002249")]
	[Address(RVA = "0x1A29E60", Offset = "0x1A28460", VA = "0x181A29E60")]
	internal DllImportAttribute(string dllName, string entryPoint, CharSet charSet, bool exactSpelling, bool setLastError, bool preserveSig, CallingConvention callingConvention, bool bestFitMapping, bool throwOnUnmappableChar)
	{
	}

	[Token(Token = "0x600224A")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public DllImportAttribute(string dllName)
	{
	}
}
