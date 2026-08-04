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
			[Address(RVA = "0x4F7DDB0", Offset = "0x4F7DDB0", VA = "0x4F7DDB0")]
			get
			{
				return null;
			}
			[Token(Token = "0x6001C1A")]
			[Address(RVA = "0x4F7E220", Offset = "0x4F7E220", VA = "0x4F7E220")]
			set
			{
			}
		}

		[Token(Token = "0x17000758")]
		public IVisualTreeUpdater this[int index]
		{
			[Token(Token = "0x6001C1C")]
			[Address(RVA = "0x4F7DBC0", Offset = "0x4F7DBC0", VA = "0x4F7DBC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001C19")]
		[Address(RVA = "0x4F7D6E0", Offset = "0x4F7D6E0", VA = "0x4F7D6E0")]
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
	[Address(RVA = "0x4F7D620", Offset = "0x4F7D620", VA = "0x4F7D620")]
	public VisualTreeUpdater(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6001C13")]
	[Address(RVA = "0x4F7D830", Offset = "0x4F7D830", VA = "0x4F7D830", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C14")]
	[Address(RVA = "0x4F7DBF0", Offset = "0x4F7DBF0", VA = "0x4F7DBF0")]
	public void UpdateVisualTreePhase(VisualTreeUpdatePhase phase)
	{
	}

	[Token(Token = "0x6001C15")]
	[Address(RVA = "0x4F7DDE0", Offset = "0x4F7DDE0", VA = "0x4F7DDE0")]
	public void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001C16")]
	public void SetUpdater<T>(VisualTreeUpdatePhase phase) where T : IVisualTreeUpdater, new()
	{
	}

	[Token(Token = "0x6001C17")]
	[Address(RVA = "0x4F7E1F0", Offset = "0x4F7E1F0", VA = "0x4F7E1F0")]
	public IVisualTreeUpdater GetUpdater(VisualTreeUpdatePhase phase)
	{
		return null;
	}

	[Token(Token = "0x6001C18")]
	[Address(RVA = "0x4F7D740", Offset = "0x4F7D740", VA = "0x4F7D740")]
	private void SetDefaultUpdaters()
	{
	}
}
