// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.IMeshGenerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000593")]
internal interface IMeshGenerator
{
	[Token(Token = "0x17000A5E")]
	VisualElement currentElement
	{
		[Token(Token = "0x60029A9")]
		set;
	}

	[Token(Token = "0x17000A5F")]
	TextJobSystem textJobSystem
	{
		[Token(Token = "0x60029AA")]
		get;
	}

	[Token(Token = "0x60029AB")]
	void DrawText(List<NativeSlice<Vertex>> vertices, List<NativeSlice<ushort>> indices, List<Texture2D> atlases, List<GlyphRenderMode> renderModes, List<float> sdfScales);

	[Token(Token = "0x60029AC")]
	void DrawText(List<NativeSlice<Vertex>> vertices, List<NativeSlice<ushort>> indices, List<Material> materials, List<GlyphRenderMode> renderModes);

	[Token(Token = "0x60029AD")]
	void DrawRectangle(MeshGenerator.RectangleParams rectParams);

	[Token(Token = "0x60029AE")]
	void DrawBorder(MeshGenerator.BorderParams borderParams);

	[Token(Token = "0x60029AF")]
	void DrawRectangleRepeat(MeshGenerator.RectangleParams rectParams, Rect totalRect, float scaledPixelsPerPoint);

	[Token(Token = "0x60029B0")]
	void ScheduleJobs(MeshGenerationContext mgc);
}
