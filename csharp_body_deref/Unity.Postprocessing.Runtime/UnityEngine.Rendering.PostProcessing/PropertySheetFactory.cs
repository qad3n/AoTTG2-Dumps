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
	[Address(RVA = "0x482ACB0", Offset = "0x482ACB0", VA = "0x482ACB0")]
	public PropertySheetFactory()
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x483C060", Offset = "0x483C060", VA = "0x483C060")]
	[Obsolete("Use PropertySheet.Get(Shader) with a direct reference to the Shader instead.")]
	public PropertySheet Get(string shaderName)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x48241C0", Offset = "0x48241C0", VA = "0x48241C0")]
	public PropertySheet Get(Shader shader)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x482BF00", Offset = "0x482BF00", VA = "0x482BF00")]
	public void Release()
	{
	}
}
