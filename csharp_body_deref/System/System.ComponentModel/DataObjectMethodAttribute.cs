// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DataObjectMethodAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000189")]
[AttributeUsage(AttributeTargets.Method)]
public sealed class DataObjectMethodAttribute : Attribute
{
	[Token(Token = "0x170001EC")]
	public bool IsDefault
	{
		[Token(Token = "0x60009F7")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001ED")]
	public DataObjectMethodType MethodType
	{
		[Token(Token = "0x60009F8")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(DataObjectMethodType);
		}
	}

	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x289A4B0", Offset = "0x2898AB0", VA = "0x18289A4B0")]
	public DataObjectMethodAttribute(DataObjectMethodType methodType)
	{
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x289A4E0", Offset = "0x2898AE0", VA = "0x18289A4E0")]
	public DataObjectMethodAttribute(DataObjectMethodType methodType, bool isDefault)
	{
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x289A340", Offset = "0x2898940", VA = "0x18289A340", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x289A3D0", Offset = "0x28989D0", VA = "0x18289A3D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x289A430", Offset = "0x2898A30", VA = "0x18289A430", Slot = "5")]
	public override bool Match(object obj)
	{
		return default(bool);
	}
}
