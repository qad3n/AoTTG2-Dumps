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
		[Address(RVA = "0x6850880", Offset = "0x684F880", VA = "0x6850880")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001129")]
		[Address(RVA = "0x6850890", Offset = "0x684F890", VA = "0x6850890")]
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
		[Address(RVA = "0x68508A0", Offset = "0x684F8A0", VA = "0x68508A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600112B")]
		[Address(RVA = "0x68508B0", Offset = "0x684F8B0", VA = "0x68508B0")]
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
		[Address(RVA = "0x68508C0", Offset = "0x684F8C0", VA = "0x68508C0")]
		[CompilerGenerated]
		get
		{
			return default(SerializableType);
		}
		[Token(Token = "0x600112D")]
		[Address(RVA = "0x68508D0", Offset = "0x684F8D0", VA = "0x68508D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x6850830", Offset = "0x684F830", VA = "0x6850830")]
	[Obsolete("This parameterless constructor is only made public for serialization. Use another constructor instead.")]
	public VariableDeclaration()
	{
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x6850840", Offset = "0x684F840", VA = "0x6850840")]
	public VariableDeclaration(string name, object value)
	{
	}
}
