// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RendererListHandle
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6584FE0", Offset = "0x6583FE0", VA = "0x6584FE0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60012BE")]
		[Address(RVA = "0x6584FF0", Offset = "0x6583FF0", VA = "0x6584FF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x65824D0", Offset = "0x65814D0", VA = "0x65824D0")]
	internal RendererListHandle(int handle, RendererListHandleType type = RendererListHandleType.Renderers)
	{
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x657EA40", Offset = "0x657DA40", VA = "0x657EA40")]
	public static implicit operator int(RendererListHandle handle)
	{
		return default(int);
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x6585000", Offset = "0x6584000", VA = "0x6585000")]
	public static implicit operator RendererList(RendererListHandle rendererList)
	{
		return default(RendererList);
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x6585140", Offset = "0x6584140", VA = "0x6585140")]
	public bool IsValid()
	{
		return default(bool);
	}
}
