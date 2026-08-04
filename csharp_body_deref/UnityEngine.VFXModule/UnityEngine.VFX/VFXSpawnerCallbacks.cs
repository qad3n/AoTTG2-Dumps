// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.VFX.VFXSpawnerCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.VFX;

[Serializable]
[Token(Token = "0x2000008")]
[UnityEngine.Scripting.RequiredByNativeCode]
public abstract class VFXSpawnerCallbacks : ScriptableObject
{
	[Token(Token = "0x600000F")]
	public abstract void OnPlay(VFXSpawnerState state, VFXExpressionValues vfxValues, VisualEffect vfxComponent);

	[Token(Token = "0x6000010")]
	public abstract void OnUpdate(VFXSpawnerState state, VFXExpressionValues vfxValues, VisualEffect vfxComponent);

	[Token(Token = "0x6000011")]
	public abstract void OnStop(VFXSpawnerState state, VFXExpressionValues vfxValues, VisualEffect vfxComponent);

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x5109CE0", Offset = "0x5109CE0", VA = "0x5109CE0")]
	protected VFXSpawnerCallbacks()
	{
	}
}
