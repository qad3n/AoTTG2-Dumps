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
	[Token(Token = "0x170001E8")]
	[Serialize]
	public string name
	{
		[Token(Token = "0x600111B")]
		[Address(RVA = "0x4D66940", Offset = "0x4D66940", VA = "0x4D66940")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600111C")]
		[Address(RVA = "0x4D66950", Offset = "0x4D66950", VA = "0x4D66950")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E9")]
	[Serialize]
	[Value]
	public object value
	{
		[Token(Token = "0x600111D")]
		[Address(RVA = "0x4D66960", Offset = "0x4D66960", VA = "0x4D66960")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600111E")]
		[Address(RVA = "0x4D66970", Offset = "0x4D66970", VA = "0x4D66970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001EA")]
	[Serialize]
	public SerializableType typeHandle
	{
		[Token(Token = "0x600111F")]
		[Address(RVA = "0x4D66980", Offset = "0x4D66980", VA = "0x4D66980")]
		[CompilerGenerated]
		get
		{
			return default(SerializableType);
		}
		[Token(Token = "0x6001120")]
		[Address(RVA = "0x4D66990", Offset = "0x4D66990", VA = "0x4D66990")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x4D668F0", Offset = "0x4D668F0", VA = "0x4D668F0")]
	[Obsolete("This parameterless constructor is only made public for serialization. Use another constructor instead.")]
	public VariableDeclaration()
	{
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x4D66900", Offset = "0x4D66900", VA = "0x4D66900")]
	public VariableDeclaration(string name, object value)
	{
	}
}
