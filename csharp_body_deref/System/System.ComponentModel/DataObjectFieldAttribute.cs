// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DataObjectFieldAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000188")]
[AttributeUsage(AttributeTargets.Property)]
public sealed class DataObjectFieldAttribute : Attribute
{
	[Token(Token = "0x170001E8")]
	public bool IsIdentity
	{
		[Token(Token = "0x60009EF")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E9")]
	public bool IsNullable
	{
		[Token(Token = "0x60009F0")]
		[Address(RVA = "0xE5A330", Offset = "0xE58930", VA = "0x180E5A330")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EA")]
	public int Length
	{
		[Token(Token = "0x60009F1")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001EB")]
	public bool PrimaryKey
	{
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x289A280", Offset = "0x2898880", VA = "0x18289A280")]
	public DataObjectFieldAttribute(bool primaryKey)
	{
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x289A230", Offset = "0x2898830", VA = "0x18289A230")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity)
	{
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x289A2C0", Offset = "0x28988C0", VA = "0x18289A2C0")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity, bool isNullable)
	{
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x289A300", Offset = "0x2898900", VA = "0x18289A300")]
	public DataObjectFieldAttribute(bool primaryKey, bool isIdentity, bool isNullable, int length)
	{
	}

	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x289A190", Offset = "0x2898790", VA = "0x18289A190", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
