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

[Token(Token = "0x2000009")]
public sealed class FakeSerializationCloner : ReflectedCloner
{
	[Token(Token = "0x17000001")]
	public fsConfig config
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x4C9F6D0", Offset = "0x4C9F6D0", VA = "0x4C9F6D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x4C9F6E0", Offset = "0x4C9F6E0", VA = "0x4C9F6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4C9F6F0", Offset = "0x4C9F6F0", VA = "0x4C9F6F0", Slot = "10")]
	public override void BeforeClone(Type type, object original)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4C9F7A0", Offset = "0x4C9F7A0", VA = "0x4C9F7A0", Slot = "13")]
	public override void AfterClone(Type type, object clone)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4C9F850", Offset = "0x4C9F850", VA = "0x4C9F850", Slot = "14")]
	protected override IEnumerable<MemberInfo> GetMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4C9F9B0", Offset = "0x4C9F9B0", VA = "0x4C9F9B0")]
	public FakeSerializationCloner()
	{
	}
}
