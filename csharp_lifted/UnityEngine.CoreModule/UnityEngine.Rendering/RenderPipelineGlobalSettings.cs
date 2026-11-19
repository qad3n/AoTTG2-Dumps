// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderPipelineGlobalSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200038E")]
public abstract class RenderPipelineGlobalSettings : ScriptableObject, ISerializationCallbackReceiver
{
	[Token(Token = "0x17000371")]
	protected virtual List<IRenderPipelineGraphicsSettings> settingsList
	{
		[Token(Token = "0x6001622")]
		[Address(RVA = "0x695C430", Offset = "0x695B430", VA = "0x695C430", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000372")]
	private Dictionary<Type, int> settingsMap
	{
		[Token(Token = "0x6001623")]
		[Address(RVA = "0x695C650", Offset = "0x695B650", VA = "0x695C650")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001624")]
	[Address(RVA = "0x695C660", Offset = "0x695B660", VA = "0x695C660")]
	private void RecreateSettingsMap()
	{
	}

	[Token(Token = "0x6001625")]
	[Address(RVA = "0x695C7A0", Offset = "0x695B7A0", VA = "0x695C7A0")]
	protected internal bool TryGet(Type type, out IRenderPipelineGraphicsSettings settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6001626")]
	protected internal bool TryGetFirstSettingsImplementingInterface<TSettingsInterfaceType>(out TSettingsInterfaceType settings) where TSettingsInterfaceType : class, IRenderPipelineGraphicsSettings
	{
		return default(bool);
	}

	[Token(Token = "0x6001627")]
	protected internal bool GetSettingsImplementingInterface<TSettingsInterfaceType>(out List<TSettingsInterfaceType> settings) where TSettingsInterfaceType : class, IRenderPipelineGraphicsSettings
	{
		return default(bool);
	}

	[Token(Token = "0x6001628")]
	[Address(RVA = "0x695C890", Offset = "0x695B890", VA = "0x695C890")]
	protected internal bool Contains(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001629")]
	[Address(RVA = "0x695C900", Offset = "0x695B900", VA = "0x695C900", Slot = "7")]
	public virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x600162A")]
	[Address(RVA = "0x695C910", Offset = "0x695B910", VA = "0x695C910", Slot = "8")]
	public virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x600162B")]
	[Address(RVA = "0x695C920", Offset = "0x695B920", VA = "0x695C920")]
	protected RenderPipelineGlobalSettings()
	{
	}
}
