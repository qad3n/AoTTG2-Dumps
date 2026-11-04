// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader
// Update status: NEW in this game update
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
	[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0", Slot = "6")]
	public virtual bool Initialize()
	{
		return default(bool);
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0", Slot = "7")]
	public virtual bool Start()
	{
		return default(bool);
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0", Slot = "8")]
	public virtual bool Stop()
	{
		return default(bool);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0", Slot = "9")]
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
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	protected AdaptivePerformanceLoader()
	{
	}
}
