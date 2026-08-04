// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRLayout
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B73520", Offset = "0x4B73520", VA = "0x4B73520")]
	public void AddCamera(Camera camera, bool enableXR)
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4B741B0", Offset = "0x4B741B0", VA = "0x4B741B0")]
	public void ReconfigurePass(XRPass xrPass, Camera camera)
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4B746F0", Offset = "0x4B746F0", VA = "0x4B746F0")]
	public List<(Camera, XRPass)> GetActivePasses()
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x4B740B0", Offset = "0x4B740B0", VA = "0x4B740B0")]
	internal void AddPass(Camera camera, XRPass xrPass)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x4B74700", Offset = "0x4B74700", VA = "0x4B74700")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x4B74840", Offset = "0x4B74840", VA = "0x4B74840")]
	internal void LogDebugInfo()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x4B74EE0", Offset = "0x4B74EE0", VA = "0x4B74EE0")]
	public XRLayout()
	{
	}
}
