// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeComponent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001F7")]
public class VolumeComponent : ScriptableObject
{
	[Token(Token = "0x20001F8")]
	public sealed class Indent : PropertyAttribute
	{
		[Token(Token = "0x4000987")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public readonly int relativeAmount;

		[Token(Token = "0x6000EF4")]
		[Address(RVA = "0x6555200", Offset = "0x6554200", VA = "0x6555200")]
		public Indent(int relativeAmount = 1)
		{
		}
	}

	[Token(Token = "0x4000983")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public bool active;

	[Token(Token = "0x4000985")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal VolumeParameter[] parameterList;

	[Token(Token = "0x4000986")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private ReadOnlyCollection<VolumeParameter> m_ParameterReadOnlyCollection;

	[Token(Token = "0x170001E8")]
	[Obsolete("Use DisplayInfo attribute to define a display name instead. #from(6000.3)", false)]
	public string displayName
	{
		[Token(Token = "0x6000EE6")]
		[Address(RVA = "0x65540E0", Offset = "0x65530E0", VA = "0x65540E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EE7")]
		[Address(RVA = "0x65540F0", Offset = "0x65530F0", VA = "0x65540F0")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x170001E9")]
	public ReadOnlyCollection<VolumeParameter> parameters
	{
		[Token(Token = "0x6000EE8")]
		[Address(RVA = "0x6554100", Offset = "0x6553100", VA = "0x6554100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x6554190", Offset = "0x6553190", VA = "0x6554190")]
	internal static void FindParameters(object o, List<VolumeParameter> parameters, [Optional] Func<FieldInfo, bool> filter)
	{
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x65547A0", Offset = "0x65537A0", VA = "0x65547A0", Slot = "4")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x6554970", Offset = "0x6553970", VA = "0x6554970", Slot = "5")]
	protected virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x65549E0", Offset = "0x65539E0", VA = "0x65549E0", Slot = "6")]
	public virtual void Override(VolumeComponent state, float interpFactor)
	{
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x6554AF0", Offset = "0x6553AF0", VA = "0x6554AF0")]
	public void SetAllOverridesTo(bool state)
	{
	}

	[Token(Token = "0x6000EEE")]
	[Address(RVA = "0x6554B00", Offset = "0x6553B00", VA = "0x6554B00")]
	internal void SetOverridesTo(IEnumerable<VolumeParameter> enumerable, bool state)
	{
	}

	[Token(Token = "0x6000EEF")]
	[Address(RVA = "0x6555030", Offset = "0x6554030", VA = "0x6555030")]
	public bool AnyPropertiesIsOverridden()
	{
		return default(bool);
	}

	[Token(Token = "0x6000EF0")]
	[Address(RVA = "0x65550A0", Offset = "0x65540A0", VA = "0x65550A0")]
	public int GetStateHash()
	{
		return default(int);
	}

	[Token(Token = "0x6000EF1")]
	[Address(RVA = "0x6555110", Offset = "0x6554110", VA = "0x6555110", Slot = "7")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x6000EF2")]
	[Address(RVA = "0x6555180", Offset = "0x6554180", VA = "0x6555180")]
	public void Release()
	{
	}

	[Token(Token = "0x6000EF3")]
	[Address(RVA = "0x65551F0", Offset = "0x65541F0", VA = "0x65551F0")]
	public VolumeComponent()
	{
	}
}
