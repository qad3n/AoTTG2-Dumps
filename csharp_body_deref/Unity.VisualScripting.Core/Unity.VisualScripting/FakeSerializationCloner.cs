// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FakeSerializationCloner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.VisualScripting.FullSerializer;

namespace Unity.VisualScripting;

[Token(Token = "0x2000008")]
public sealed class FakeSerializationCloner : ReflectedCloner
{
	[Token(Token = "0x17000001")]
	public fsConfig config
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x678E970", Offset = "0x678D970", VA = "0x678E970")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x678E980", Offset = "0x678D980", VA = "0x678E980")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x678E990", Offset = "0x678D990", VA = "0x678E990", Slot = "10")]
	public override void BeforeClone(Type type, object original)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x678EA40", Offset = "0x678DA40", VA = "0x678EA40", Slot = "13")]
	public override void AfterClone(Type type, object clone)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x678EAF0", Offset = "0x678DAF0", VA = "0x678EAF0", Slot = "14")]
	protected override IEnumerable<MemberInfo> GetMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x678EC50", Offset = "0x678DC50", VA = "0x678EC50")]
	public FakeSerializationCloner()
	{
	}
}
