// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.DataMemberAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000003")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, Inherited = false, AllowMultiple = false)]
public sealed class DataMemberAttribute : Attribute
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x10")]
	private string name;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x18")]
	private int order;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x1C")]
	private bool isRequired;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x1D")]
	private bool emitDefaultValue;

	[Token(Token = "0x17000002")]
	public string Name
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public int Order
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsRequired
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0xE5A3F0", Offset = "0xE589F0", VA = "0x180E5A3F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000005")]
	public bool EmitDefaultValue
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x12B36C0", Offset = "0x12B1CC0", VA = "0x1812B36C0")]
		get
		{
			return default(bool);
		}
	}
}
