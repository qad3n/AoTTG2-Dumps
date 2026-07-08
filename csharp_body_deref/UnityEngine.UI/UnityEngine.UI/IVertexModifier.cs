using System;
using System.Collections.Generic;
using System.ComponentModel;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000084")]
[EditorBrowsable(EditorBrowsableState.Never)]
[Obsolete("Use IMeshModifier instead", true)]
public interface IVertexModifier
{
	[Token(Token = "0x6000532")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("use IMeshModifier.ModifyMesh (VertexHelper verts)  instead", true)]
	void ModifyVertices(List<UIVertex> verts);
}
