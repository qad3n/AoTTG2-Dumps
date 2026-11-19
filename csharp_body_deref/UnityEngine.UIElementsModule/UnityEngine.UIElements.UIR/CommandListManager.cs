// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.CommandListManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000575")]
internal class CommandListManager : IDisposable
{
	[Token(Token = "0x400129B")]
	[FieldOffset(Offset = "0x10")]
	private readonly IntPtr m_VertexDecl;

	[Token(Token = "0x400129C")]
	[FieldOffset(Offset = "0x18")]
	private readonly IntPtr m_DefaultStencilState;

	[Token(Token = "0x400129D")]
	[FieldOffset(Offset = "0x20")]
	private uint m_CurrentIndex;

	[Token(Token = "0x400129E")]
	[FieldOffset(Offset = "0x28")]
	private Stack<CommandList> m_CommandListPool;

	[Token(Token = "0x400129F")]
	[FieldOffset(Offset = "0x30")]
	private CommandList m_DefaultCommandList;

	[Token(Token = "0x40012A0")]
	[FieldOffset(Offset = "0x38")]
	private List<CommandList>[] m_CommandListsArray;

	[Token(Token = "0x40012A1")]
	[FieldOffset(Offset = "0x40")]
	private List<CommandList> m_CurrentFrameCommandLists;

	[Token(Token = "0x40012A2")]
	[FieldOffset(Offset = "0x48")]
	private List<UIRenderer> m_UIRenderersWithDrawCallData;

	[Token(Token = "0x40012A3")]
	[FieldOffset(Offset = "0x50")]
	private TextureSlotCount m_TextureSlotCount;

	[Token(Token = "0x17000A4C")]
	public CommandList defaultCommandList
	{
		[Token(Token = "0x6002900")]
		[Address(RVA = "0x6B7B3C0", Offset = "0x6B7A3C0", VA = "0x6B7B3C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A4D")]
	protected bool disposed
	{
		[Token(Token = "0x6002905")]
		[Address(RVA = "0x6B7BA70", Offset = "0x6B7AA70", VA = "0x6B7BA70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002906")]
		[Address(RVA = "0x6B7BA80", Offset = "0x6B7AA80", VA = "0x6B7BA80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60028FF")]
	[Address(RVA = "0x6B7B0B0", Offset = "0x6B7A0B0", VA = "0x6B7B0B0")]
	public CommandListManager(IntPtr vertexDecl, IntPtr defaultStencilState)
	{
	}

	[Token(Token = "0x6002901")]
	[Address(RVA = "0x6B7B3D0", Offset = "0x6B7A3D0", VA = "0x6B7B3D0")]
	public CommandList GetOrCreateCommandList(VisualElement owner, Material material, CommandFlags commandFlags)
	{
		return null;
	}

	[Token(Token = "0x6002902")]
	[Address(RVA = "0x6B7B520", Offset = "0x6B7A520", VA = "0x6B7B520")]
	public void AdvanceFrame()
	{
	}

	[Token(Token = "0x6002903")]
	[Address(RVA = "0x6B7B810", Offset = "0x6B7A810", VA = "0x6B7B810")]
	public void BeginSerialize(TextureSlotCount textureSlotCount)
	{
	}

	[Token(Token = "0x6002904")]
	[Address(RVA = "0x6B7B830", Offset = "0x6B7A830", VA = "0x6B7B830")]
	public void EndSerialize()
	{
	}

	[Token(Token = "0x6002907")]
	[Address(RVA = "0x6B7BA90", Offset = "0x6B7AA90", VA = "0x6B7BA90", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002908")]
	[Address(RVA = "0x6B7B650", Offset = "0x6B7A650", VA = "0x6B7B650")]
	public void ResetUIRendererDrawCallData()
	{
	}

	[Token(Token = "0x6002909")]
	[Address(RVA = "0x6B7BAA0", Offset = "0x6B7AAA0", VA = "0x6B7BAA0")]
	protected void Dispose(bool disposing)
	{
	}
}
