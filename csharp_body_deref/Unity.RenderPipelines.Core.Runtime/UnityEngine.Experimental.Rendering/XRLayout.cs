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

[Token(Token = "0x200000B")]
public class XRLayout
{
	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<(Camera, XRPass)> m_ActivePasses;

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2AC8C00", Offset = "0x2AC7200", VA = "0x182AC8C00")]
	public void AddCamera(Camera camera, bool enableXR)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2AC95F0", Offset = "0x2AC7BF0", VA = "0x182AC95F0")]
	public void ReconfigurePass(XRPass xrPass, Camera camera)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
	public List<(Camera, XRPass)> GetActivePasses()
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x2AC8E40", Offset = "0x2AC7440", VA = "0x182AC8E40")]
	internal void AddPass(Camera camera, XRPass xrPass)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x2AC8F80", Offset = "0x2AC7580", VA = "0x182AC8F80")]
	internal void Clear()
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x2AC90B0", Offset = "0x2AC76B0", VA = "0x182AC90B0")]
	internal void LogDebugInfo()
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x2AC96A0", Offset = "0x2AC7CA0", VA = "0x182AC96A0")]
	public XRLayout()
	{
	}
}
