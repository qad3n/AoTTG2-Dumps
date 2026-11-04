// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeUpdater
// Update status: CHANGED in this game update
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
			[Address(RVA = "0x277EF80", Offset = "0x277D580", VA = "0x18277EF80")]
			get
			{
				return null;
			}
			[Token(Token = "0x600288C")]
			[Address(RVA = "0x31608E0", Offset = "0x315EEE0", VA = "0x1831608E0")]
			set
			{
			}
		}

		[Token(Token = "0x17000A40")]
		public IVisualTreeUpdater this[int index]
		{
			[Token(Token = "0x600288E")]
			[Address(RVA = "0x277EF80", Offset = "0x277D580", VA = "0x18277EF80")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600288B")]
		[Address(RVA = "0x3160880", Offset = "0x315EE80", VA = "0x183160880")]
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
	[Address(RVA = "0x3175310", Offset = "0x3173910", VA = "0x183175310")]
	public VisualTreeUpdater(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6002884")]
	[Address(RVA = "0x3174C20", Offset = "0x3173220", VA = "0x183174C20", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002885")]
	[Address(RVA = "0x3175100", Offset = "0x3173700", VA = "0x183175100")]
	public void UpdateVisualTreePhase(VisualTreeUpdatePhase phase)
	{
	}

	[Token(Token = "0x6002886")]
	[Address(RVA = "0x3174D50", Offset = "0x3173350", VA = "0x183174D50")]
	public void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6002887")]
	[Address(RVA = "0x3174F80", Offset = "0x3173580", VA = "0x183174F80")]
	public void SetUpdater(IVisualTreeUpdater updater, VisualTreeUpdatePhase phase)
	{
	}

	[Token(Token = "0x6002888")]
	public void SetUpdater<T>(VisualTreeUpdatePhase phase) where T : IVisualTreeUpdater, new()
	{
	}

	[Token(Token = "0x6002889")]
	[Address(RVA = "0x3174D10", Offset = "0x3173310", VA = "0x183174D10")]
	public IVisualTreeUpdater GetUpdater(VisualTreeUpdatePhase phase)
	{
		return null;
	}

	[Token(Token = "0x600288A")]
	[Address(RVA = "0x3174E60", Offset = "0x3173460", VA = "0x183174E60")]
	private void SetDefaultUpdaters()
	{
	}
}
