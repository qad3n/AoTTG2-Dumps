// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.IMeshGenerator
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005A8")]
internal interface IMeshGenerator
{
	[Token(Token = "0x17000A6A")]
	VisualElement currentElement
	{
		[Token(Token = "0x6002A0A")]
		set;
	}

	[Token(Token = "0x17000A6B")]
	TextJobSystem textJobSystem
	{
		[Token(Token = "0x6002A0B")]
		get;
	}

	[Token(Token = "0x6002A0C")]
	void DrawText(List<NativeSlice<Vertex>> vertices, List<NativeSlice<ushort>> indices, List<Texture2D> atlases, List<GlyphRenderMode> renderModes, List<float> sdfScales);

	[Token(Token = "0x6002A0D")]
	void DrawText(List<NativeSlice<Vertex>> vertices, List<NativeSlice<ushort>> indices, List<Material> materials, List<GlyphRenderMode> renderModes);

	[Token(Token = "0x6002A0E")]
	void DrawRectangle(MeshGenerator.RectangleParams rectParams);

	[Token(Token = "0x6002A0F")]
	void DrawBorder(MeshGenerator.BorderParams borderParams);

	[Token(Token = "0x6002A10")]
	void DrawRectangleRepeat(MeshGenerator.RectangleParams rectParams, Rect totalRect, float scaledPixelsPerPoint);

	[Token(Token = "0x6002A11")]
	void ScheduleJobs(MeshGenerationContext mgc);
}
