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
	[Address(RVA = "0x4DC7F10", Offset = "0x4DC7F10", VA = "0x4DC7F10")]
	protected BaseVertexEffect()
	{
	}
}
