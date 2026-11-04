// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SubsystemsImplementation.SubsystemProvider
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.SubsystemsImplementation;

[Token(Token = "0x2000011")]
public abstract class SubsystemProvider
{
	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x10")]
	internal bool m_Running;

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected SubsystemProvider()
	{
	}
}
[Token(Token = "0x2000012")]
public abstract class SubsystemProvider<TSubsystem> : SubsystemProvider where TSubsystem : SubsystemWithProvider, new()
{
	[Token(Token = "0x6000034")]
	public abstract void Stop();

	[Token(Token = "0x6000035")]
	public abstract void Destroy();

	[Token(Token = "0x6000036")]
	protected SubsystemProvider()
	{
	}
}
