// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x69F2F80", Offset = "0x69F1F80", VA = "0x69F2F80", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x69F2F90", Offset = "0x69F1F90", VA = "0x69F2F90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	protected internal Type providerType
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x69F2FA0", Offset = "0x69F1FA0", VA = "0x69F2FA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x69F2FB0", Offset = "0x69F1FB0", VA = "0x69F2FB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	protected internal Type subsystemTypeOverride
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x69F2FC0", Offset = "0x69F1FC0", VA = "0x69F2FC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x69F2FD0", Offset = "0x69F1FD0", VA = "0x69F2FD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600002F")]
	internal abstract void ThrowIfInvalid();

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x69F2FE0", Offset = "0x69F1FE0", VA = "0x69F2FE0")]
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
