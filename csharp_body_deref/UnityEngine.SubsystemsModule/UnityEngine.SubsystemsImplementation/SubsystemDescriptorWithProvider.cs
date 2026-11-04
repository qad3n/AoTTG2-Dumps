// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.SubsystemsImplementation;

[Token(Token = "0x200000F")]
public abstract class SubsystemDescriptorWithProvider : ISubsystemDescriptor
{
	[Token(Token = "0x17000006")]
	public string id
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	protected internal Type providerType
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	protected internal Type subsystemTypeOverride
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600002F")]
	internal abstract void ThrowIfInvalid();

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected SubsystemDescriptorWithProvider()
	{
	}
}
[Token(Token = "0x2000010")]
public class SubsystemDescriptorWithProvider<TSubsystem, TProvider> : SubsystemDescriptorWithProvider where TSubsystem : SubsystemWithProvider, new() where TProvider : SubsystemProvider<TSubsystem>
{
	[Token(Token = "0x6000031")]
	internal sealed override void ThrowIfInvalid()
	{
	}

	[Token(Token = "0x6000032")]
	public SubsystemDescriptorWithProvider()
	{
	}
}
