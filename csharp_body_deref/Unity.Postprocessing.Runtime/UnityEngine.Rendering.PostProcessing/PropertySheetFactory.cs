// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.PropertySheetFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000084")]
public sealed class PropertySheetFactory
{
	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Shader, PropertySheet> m_Sheets;

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x4B4FDA0", Offset = "0x4B4FDA0", VA = "0x4B4FDA0")]
	public PropertySheetFactory()
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x4B61150", Offset = "0x4B61150", VA = "0x4B61150")]
	[Obsolete("Use PropertySheet.Get(Shader) with a direct reference to the Shader instead.")]
	public PropertySheet Get(string shaderName)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x4B492B0", Offset = "0x4B492B0", VA = "0x4B492B0")]
	public PropertySheet Get(Shader shader)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x4B50FF0", Offset = "0x4B50FF0", VA = "0x4B50FF0")]
	public void Release()
	{
	}
}
