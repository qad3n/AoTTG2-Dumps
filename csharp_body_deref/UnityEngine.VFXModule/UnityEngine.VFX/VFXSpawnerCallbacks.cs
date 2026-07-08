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
	[Address(RVA = "0x4DE1ED0", Offset = "0x4DE1ED0", VA = "0x4DE1ED0")]
	protected VFXSpawnerCallbacks()
	{
	}
}
