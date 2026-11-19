// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000561")]
internal sealed class VisualTreeUpdater : IDisposable
{
	[Token(Token = "0x2000562")]
	private class UpdaterArray
	{
		[Token(Token = "0x400124E")]
		[FieldOffset(Offset = "0x10")]
		private IVisualTreeUpdater[] m_VisualTreeUpdaters;

		[Token(Token = "0x17000A3F")]
		public IVisualTreeUpdater this[VisualTreeUpdatePhase phase]
		{
			[Token(Token = "0x600288D")]
			[Address(RVA = "0x6B763A0", Offset = "0x6B753A0", VA = "0x6B763A0")]
			get
			{
				return null;
			}
			[Token(Token = "0x600288C")]
			[Address(RVA = "0x6B766B0", Offset = "0x6B756B0", VA = "0x6B766B0")]
			set
			{
			}
		}

		[Token(Token = "0x17000A40")]
		public IVisualTreeUpdater this[int index]
		{
			[Token(Token = "0x600288E")]
			[Address(RVA = "0x6B760D0", Offset = "0x6B750D0", VA = "0x6B760D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600288B")]
		[Address(RVA = "0x6B75E30", Offset = "0x6B74E30", VA = "0x6B75E30")]
		public UpdaterArray()
		{
		}
	}

	[Token(Token = "0x400124C")]
	[FieldOffset(Offset = "0x10")]
	private BaseVisualElementPanel m_Panel;

	[Token(Token = "0x400124D")]
	[FieldOffset(Offset = "0x18")]
	private UpdaterArray m_UpdaterArray;

	[Token(Token = "0x6002883")]
	[Address(RVA = "0x6B75D70", Offset = "0x6B74D70", VA = "0x6B75D70")]
	public VisualTreeUpdater(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6002884")]
	[Address(RVA = "0x6B75FC0", Offset = "0x6B74FC0", VA = "0x6B75FC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002885")]
	[Address(RVA = "0x6B76100", Offset = "0x6B75100", VA = "0x6B76100")]
	public void UpdateVisualTreePhase(VisualTreeUpdatePhase phase)
	{
	}

	[Token(Token = "0x6002886")]
	[Address(RVA = "0x6B763D0", Offset = "0x6B753D0", VA = "0x6B763D0")]
	public void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6002887")]
	[Address(RVA = "0x6B764F0", Offset = "0x6B754F0", VA = "0x6B764F0")]
	public void SetUpdater(IVisualTreeUpdater updater, VisualTreeUpdatePhase phase)
	{
	}

	[Token(Token = "0x6002888")]
	public void SetUpdater<T>(VisualTreeUpdatePhase phase) where T : IVisualTreeUpdater, new()
	{
	}

	[Token(Token = "0x6002889")]
	[Address(RVA = "0x6B76720", Offset = "0x6B75720", VA = "0x6B76720")]
	public IVisualTreeUpdater GetUpdater(VisualTreeUpdatePhase phase)
	{
		return null;
	}

	[Token(Token = "0x600288A")]
	[Address(RVA = "0x6B75E90", Offset = "0x6B74E90", VA = "0x6B75E90")]
	private void SetDefaultUpdaters()
	{
	}
}
