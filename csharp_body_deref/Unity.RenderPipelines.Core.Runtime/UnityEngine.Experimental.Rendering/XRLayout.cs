using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x2000013")]
public class XRLayout
{
	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<(Camera, XRPass)> m_ActivePasses;

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x484E430", Offset = "0x484E430", VA = "0x484E430")]
	public void AddCamera(Camera camera, bool enableXR)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x484F0C0", Offset = "0x484F0C0", VA = "0x484F0C0")]
	public void ReconfigurePass(XRPass xrPass, Camera camera)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x484F600", Offset = "0x484F600", VA = "0x484F600")]
	public List<(Camera, XRPass)> GetActivePasses()
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x484EFC0", Offset = "0x484EFC0", VA = "0x484EFC0")]
	internal void AddPass(Camera camera, XRPass xrPass)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x484F610", Offset = "0x484F610", VA = "0x484F610")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x484F750", Offset = "0x484F750", VA = "0x484F750")]
	internal void LogDebugInfo()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x484FDF0", Offset = "0x484FDF0", VA = "0x484FDF0")]
	public XRLayout()
	{
	}
}
