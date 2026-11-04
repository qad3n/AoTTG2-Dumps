// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RendererListHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000298")]
[DebuggerDisplay("RendererList ({handle})")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public struct RendererListHandle
{
	[Token(Token = "0x4000B9C")]
	[FieldOffset(Offset = "0x0")]
	internal RendererListHandleType type;

	[Token(Token = "0x4000B9D")]
	[FieldOffset(Offset = "0x4")]
	private bool m_IsValid;

	[Token(Token = "0x17000258")]
	internal int handle
	{
		[Token(Token = "0x60012BD")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60012BE")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x2BA59B0", Offset = "0x2BA3FB0", VA = "0x182BA59B0")]
	internal RendererListHandle(int handle, RendererListHandleType type = RendererListHandleType.Renderers)
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
	public static implicit operator int(RendererListHandle handle)
	{
		return default(int);
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x2BA59C0", Offset = "0x2BA3FC0", VA = "0x182BA59C0")]
	public static implicit operator RendererList(RendererListHandle rendererList)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x180D610", Offset = "0x180BC10", VA = "0x18180D610")]
	public bool IsValid()
	{
		return default(bool);
	}
}
