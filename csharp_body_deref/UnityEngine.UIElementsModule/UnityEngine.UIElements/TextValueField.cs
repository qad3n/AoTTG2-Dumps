// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextValueField
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x200015F")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public abstract class TextValueField<TValueType> : TextInputBaseField<TValueType>, IValueField<TValueType>
{
	[Token(Token = "0x2000160")]
	protected abstract class TextValueInput : TextInputBase
	{
		[Token(Token = "0x170001E2")]
		private TextValueField<TValueType> textValueFieldParent
		{
			[Token(Token = "0x6000A2E")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001E3")]
		protected abstract string allowedCharacters
		{
			[Token(Token = "0x6000A31")]
			get;
		}

		[Token(Token = "0x170001E4")]
		public string formatString
		{
			[Token(Token = "0x6000A32")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000A33")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000A2F")]
		protected TextValueInput()
		{
		}

		[Token(Token = "0x6000A30")]
		internal override bool AcceptCharacter(char c)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A34")]
		public abstract void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, TValueType startValue);

		[Token(Token = "0x6000A35")]
		public void StartDragging()
		{
		}

		[Token(Token = "0x6000A36")]
		public void StopDragging()
		{
		}

		[Token(Token = "0x6000A37")]
		protected abstract string ValueToString(TValueType value);

		[Token(Token = "0x6000A38")]
		protected override TValueType StringToValue(string str)
		{
			return (TValueType)null;
		}
	}

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId formatStringProperty;

	[Token(Token = "0x400066D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId supportExpressionsProperty;

	[Token(Token = "0x400066E")]
	[FieldOffset(Offset = "0x0")]
	private BaseFieldMouseDragger m_Dragger;

	[Token(Token = "0x400066F")]
	[FieldOffset(Offset = "0x0")]
	private bool m_ForceUpdateDisplay;

	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x0")]
	private bool m_SupportExpressions;

	[Token(Token = "0x170001DF")]
	private TextValueInput textValueInput
	{
		[Token(Token = "0x6000A19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E0")]
	[CreateProperty]
	public bool supportExpressions
	{
		[Token(Token = "0x6000A1A")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A1B")]
		set
		{
		}
	}

	[Token(Token = "0x170001E1")]
	[CreateProperty]
	public string formatString
	{
		[Token(Token = "0x6000A1C")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A1D")]
		set
		{
		}
	}

	[Token(Token = "0x6000A1E")]
	protected TextValueField(string label, int maxLength, TextValueInput textValueInput)
	{
	}

	[Token(Token = "0x6000A1F")]
	public abstract void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, TValueType startValue);

	[Token(Token = "0x6000A20")]
	public void StartDragging()
	{
	}

	[Token(Token = "0x6000A21")]
	public void StopDragging()
	{
	}

	[Token(Token = "0x6000A22")]
	internal override void UpdateValueFromText()
	{
	}

	[Token(Token = "0x6000A23")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal override void UpdateTextFromValue()
	{
	}

	[Token(Token = "0x6000A24")]
	private void OnIsReadOnlyChanged(bool newValue)
	{
	}

	[Token(Token = "0x6000A25")]
	internal virtual bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A26")]
	protected void AddLabelDragger<TDraggerType>()
	{
	}

	[Token(Token = "0x6000A27")]
	private void EnableLabelDragger(bool enable)
	{
	}

	[Token(Token = "0x6000A28")]
	public override void SetValueWithoutNotify(TValueType newValue)
	{
	}

	[Token(Token = "0x6000A29")]
	[EventInterest(new Type[]
	{
		typeof(BlurEvent),
		typeof(FocusEvent)
	})]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x6000A2A")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000A2B")]
	internal override void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x6000A2C")]
	internal override void UnregisterEditingCallbacks()
	{
	}
}
