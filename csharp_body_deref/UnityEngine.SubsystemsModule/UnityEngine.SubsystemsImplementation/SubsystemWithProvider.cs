// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SubsystemsImplementation.SubsystemWithProvider
// Update status: CHANGED in this game update
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
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	internal SubsystemProvider providerBase
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2FF8860", Offset = "0x2FF6E60", VA = "0x182FF8860", Slot = "4")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000038")]
	protected abstract void OnStop();

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x2FF8760", Offset = "0x2FF6D60", VA = "0x182FF8760", Slot = "6")]
	public void Destroy()
	{
	}

	[Token(Token = "0x600003A")]
	protected abstract void OnDestroy();

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected SubsystemWithProvider()
	{
	}
}
[Token(Token = "0x2000014")]
public abstract class SubsystemWithProvider<TSubsystem, TSubsystemDescriptor, TProvider> : SubsystemWithProvider where TSubsystem : SubsystemWithProvider, new() where TSubsystemDescriptor : SubsystemDescriptorWithProvider where TProvider : SubsystemProvider<TSubsystem>
{
	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
