// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SubsystemsImplementation.SubsystemWithProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.SubsystemsImplementation;

[Token(Token = "0x2000013")]
public abstract class SubsystemWithProvider : ISubsystem
{
	[Token(Token = "0x17000009")]
	public bool running
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x69F3170", Offset = "0x69F2170", VA = "0x69F3170", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x69F3180", Offset = "0x69F2180", VA = "0x69F3180")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	internal SubsystemProvider providerBase
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x69F3190", Offset = "0x69F2190", VA = "0x69F3190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x69F3000", Offset = "0x69F2000", VA = "0x69F3000", Slot = "4")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000038")]
	protected abstract void OnStop();

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x69F3040", Offset = "0x69F2040", VA = "0x69F3040", Slot = "6")]
	public void Destroy()
	{
	}

	[Token(Token = "0x600003A")]
	protected abstract void OnDestroy();

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x69F31A0", Offset = "0x69F21A0", VA = "0x69F31A0")]
	protected SubsystemWithProvider()
	{
	}
}
[Token(Token = "0x2000014")]
public abstract class SubsystemWithProvider<TSubsystem, TSubsystemDescriptor, TProvider> : SubsystemWithProvider where TSubsystem : SubsystemWithProvider, new() where TSubsystemDescriptor : SubsystemDescriptorWithProvider where TProvider : SubsystemProvider<TSubsystem>
{
	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private TSubsystemDescriptor _003CsubsystemDescriptor_003Ek__BackingField;

	[Token(Token = "0x1700000B")]
	protected internal TProvider provider
	{
		[Token(Token = "0x600003F")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000040")]
	protected override void OnStop()
	{
	}

	[Token(Token = "0x6000041")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x6000042")]
	protected SubsystemWithProvider()
	{
	}
}
