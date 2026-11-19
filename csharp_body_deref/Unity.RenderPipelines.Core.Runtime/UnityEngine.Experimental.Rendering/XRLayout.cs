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
	[Address(RVA = "0x64A8BE0", Offset = "0x64A7BE0", VA = "0x64A8BE0")]
	public void AddCamera(Camera camera, bool enableXR)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x64A99E0", Offset = "0x64A89E0", VA = "0x64A99E0")]
	public void ReconfigurePass(XRPass xrPass, Camera camera)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x64A9F70", Offset = "0x64A8F70", VA = "0x64A9F70")]
	public List<(Camera, XRPass)> GetActivePasses()
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x64A98D0", Offset = "0x64A88D0", VA = "0x64A98D0")]
	internal void AddPass(Camera camera, XRPass xrPass)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x64A9F80", Offset = "0x64A8F80", VA = "0x64A9F80")]
	internal void Clear()
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x64AA0C0", Offset = "0x64A90C0", VA = "0x64AA0C0")]
	internal void LogDebugInfo()
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x64AA790", Offset = "0x64A9790", VA = "0x64AA790")]
	public XRLayout()
	{
	}
}
