// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.BaseVertexEffect
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.ComponentModel;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000082")]
[Obsolete("Use BaseMeshEffect instead", true)]
public abstract class BaseVertexEffect
{
	[Token(Token = "0x6000529")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use BaseMeshEffect.ModifyMeshes instead", true)]
	public abstract void ModifyVertices(List<UIVertex> vertices);

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x50EF860", Offset = "0x50EF860", VA = "0x50EF860")]
	protected BaseVertexEffect()
	{
	}
}
