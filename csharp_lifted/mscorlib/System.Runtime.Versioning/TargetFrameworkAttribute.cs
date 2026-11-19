// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Versioning.TargetFrameworkAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Versioning;

[Token(Token = "0x20003CD")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = false, Inherited = false)]
public sealed class TargetFrameworkAttribute : Attribute
{
	[Token(Token = "0x4000F29")]
	[FieldOffset(Offset = "0x10")]
	private string _frameworkName;

	[Token(Token = "0x4000F2A")]
	[FieldOffset(Offset = "0x18")]
	private string _frameworkDisplayName;

	[Token(Token = "0x17000411")]
	public string FrameworkDisplayName
	{
		[Token(Token = "0x6001F61")]
		[Address(RVA = "0x539B3E0", Offset = "0x539A3E0", VA = "0x539B3E0")]
		set
		{
		}
	}

	[Token(Token = "0x6001F60")]
	[Address(RVA = "0x539B360", Offset = "0x539A360", VA = "0x539B360")]
	public TargetFrameworkAttribute(string frameworkName)
	{
	}
}
