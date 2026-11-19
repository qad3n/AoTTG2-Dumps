// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000033")]
public abstract class AdaptivePerformanceLoader : ScriptableObject
{
	[Token(Token = "0x1700007B")]
	public abstract bool Initialized
	{
		[Token(Token = "0x6000174")]
		get;
	}

	[Token(Token = "0x1700007C")]
	public abstract bool Running
	{
		[Token(Token = "0x6000175")]
		get;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x688B7A0", Offset = "0x688A7A0", VA = "0x688B7A0", Slot = "6")]
	public virtual bool Initialize()
	{
		return default(bool);
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x688B7B0", Offset = "0x688A7B0", VA = "0x688B7B0", Slot = "7")]
	public virtual bool Start()
	{
		return default(bool);
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x688B7C0", Offset = "0x688A7C0", VA = "0x688B7C0", Slot = "8")]
	public virtual bool Stop()
	{
		return default(bool);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x688B7D0", Offset = "0x688A7D0", VA = "0x688B7D0", Slot = "9")]
	public virtual bool Deinitialize()
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	public abstract T GetLoadedSubsystem<T>() where T : class, ISubsystem;

	[Token(Token = "0x600017B")]
	public abstract ISubsystem GetDefaultSubsystem();

	[Token(Token = "0x600017C")]
	public abstract IAdaptivePerformanceSettings GetSettings();

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x688B7E0", Offset = "0x688A7E0", VA = "0x688B7E0")]
	protected AdaptivePerformanceLoader()
	{
	}
}
