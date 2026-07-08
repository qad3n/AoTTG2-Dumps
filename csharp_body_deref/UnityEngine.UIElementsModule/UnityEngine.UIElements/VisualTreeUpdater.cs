using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000486")]
internal sealed class VisualTreeUpdater : IDisposable
{
	[Token(Token = "0x2000487")]
	private class UpdaterArray
	{
		[Token(Token = "0x4000DAA")]
		[FieldOffset(Offset = "0x10")]
		private IVisualTreeUpdater[] m_VisualTreeUpdaters;

		[Token(Token = "0x17000757")]
		public IVisualTreeUpdater this[VisualTreeUpdatePhase phase]
		{
			[Token(Token = "0x6001C1B")]
			[Address(RVA = "0x4C56480", Offset = "0x4C56480", VA = "0x4C56480")]
			get
			{
				return null;
			}
			[Token(Token = "0x6001C1A")]
			[Address(RVA = "0x4C568F0", Offset = "0x4C568F0", VA = "0x4C568F0")]
			set
			{
			}
		}

		[Token(Token = "0x17000758")]
		public IVisualTreeUpdater this[int index]
		{
			[Token(Token = "0x6001C1C")]
			[Address(RVA = "0x4C56290", Offset = "0x4C56290", VA = "0x4C56290")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001C19")]
		[Address(RVA = "0x4C55DB0", Offset = "0x4C55DB0", VA = "0x4C55DB0")]
		public UpdaterArray()
		{
		}
	}

	[Token(Token = "0x4000DA8")]
	[FieldOffset(Offset = "0x10")]
	private BaseVisualElementPanel m_Panel;

	[Token(Token = "0x4000DA9")]
	[FieldOffset(Offset = "0x18")]
	private UpdaterArray m_UpdaterArray;

	[Token(Token = "0x6001C12")]
	[Address(RVA = "0x4C55CF0", Offset = "0x4C55CF0", VA = "0x4C55CF0")]
	public VisualTreeUpdater(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6001C13")]
	[Address(RVA = "0x4C55F00", Offset = "0x4C55F00", VA = "0x4C55F00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C14")]
	[Address(RVA = "0x4C562C0", Offset = "0x4C562C0", VA = "0x4C562C0")]
	public void UpdateVisualTreePhase(VisualTreeUpdatePhase phase)
	{
	}

	[Token(Token = "0x6001C15")]
	[Address(RVA = "0x4C564B0", Offset = "0x4C564B0", VA = "0x4C564B0")]
	public void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001C16")]
	public void SetUpdater<T>(VisualTreeUpdatePhase phase) where T : IVisualTreeUpdater, new()
	{
	}

	[Token(Token = "0x6001C17")]
	[Address(RVA = "0x4C568C0", Offset = "0x4C568C0", VA = "0x4C568C0")]
	public IVisualTreeUpdater GetUpdater(VisualTreeUpdatePhase phase)
	{
		return null;
	}

	[Token(Token = "0x6001C18")]
	[Address(RVA = "0x4C55E10", Offset = "0x4C55E10", VA = "0x4C55E10")]
	private void SetDefaultUpdaters()
	{
	}
}
