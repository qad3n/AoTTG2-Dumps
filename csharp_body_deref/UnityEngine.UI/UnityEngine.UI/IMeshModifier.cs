using System;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000085")]
public interface IMeshModifier
{
	[Token(Token = "0x6000533")]
	[Obsolete("use IMeshModifier.ModifyMesh (VertexHelper verts) instead", false)]
	void ModifyMesh(Mesh mesh);

	[Token(Token = "0x6000534")]
	void ModifyMesh(VertexHelper verts);
}
