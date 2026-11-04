// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.VariableDeclaration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001D2")]
[SerializationVersion("A", new Type[] { })]
public sealed class VariableDeclaration
{
	[Token(Token = "0x170001EB")]
	[Serialize]
	public string name
	{
		[Token(Token = "0x6001128")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001129")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001EC")]
	[Serialize]
	[Value]
	public object value
	{
		[Token(Token = "0x600112A")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600112B")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001ED")]
	[Serialize]
	public SerializableType typeHandle
	{
		[Token(Token = "0x600112C")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return default(SerializableType);
		}
		[Token(Token = "0x600112D")]
		[Address(RVA = "0x2D7E6D0", Offset = "0x2D7CCD0", VA = "0x182D7E6D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	[Obsolete("This parameterless constructor is only made public for serialization. Use another constructor instead.")]
	public VariableDeclaration()
	{
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public VariableDeclaration(string name, object value)
	{
	}
}
