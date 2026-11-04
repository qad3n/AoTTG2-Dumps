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
[Token(Token = "0x200000A")]
[UnityEngine.Scripting.RequiredByNativeCode]
public abstract class VFXSpawnerCallbacks : ScriptableObject
{
	[Token(Token = "0x6000017")]
	public abstract void OnPlay(VFXSpawnerState state, VFXExpressionValues vfxValues, VisualEffect vfxComponent);

	[Token(Token = "0x6000018")]
	public abstract void OnUpdate(VFXSpawnerState state, VFXExpressionValues vfxValues, VisualEffect vfxComponent);

	[Token(Token = "0x6000019")]
	public abstract void OnStop(VFXSpawnerState state, VFXExpressionValues vfxValues, VisualEffect vfxComponent);

	[Token(Token = "0x600001A")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	protected VFXSpawnerCallbacks()
	{
	}
}
